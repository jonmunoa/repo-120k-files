// fichero 26645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26645;

Registro26645 crear_registro26645(int id) {
    Registro26645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
