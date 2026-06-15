// fichero 42093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42093;

Registro42093 crear_registro42093(int id) {
    Registro42093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
