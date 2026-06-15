// fichero 18281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18281;

Registro18281 crear_registro18281(int id) {
    Registro18281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
