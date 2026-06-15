// fichero 40105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40105;

Registro40105 crear_registro40105(int id) {
    Registro40105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
