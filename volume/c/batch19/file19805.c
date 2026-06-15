// fichero 19805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19805;

Registro19805 crear_registro19805(int id) {
    Registro19805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
