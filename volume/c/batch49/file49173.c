// fichero 49173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49173;

Registro49173 crear_registro49173(int id) {
    Registro49173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
