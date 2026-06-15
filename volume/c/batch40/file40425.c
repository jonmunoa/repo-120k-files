// fichero 40425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40425;

Registro40425 crear_registro40425(int id) {
    Registro40425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
