// fichero 19493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19493;

Registro19493 crear_registro19493(int id) {
    Registro19493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
