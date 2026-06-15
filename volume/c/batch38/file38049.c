// fichero 38049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38049;

Registro38049 crear_registro38049(int id) {
    Registro38049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
