// fichero 40169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40169;

Registro40169 crear_registro40169(int id) {
    Registro40169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
