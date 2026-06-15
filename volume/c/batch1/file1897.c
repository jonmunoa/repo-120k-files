// fichero 1897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1897;

Registro1897 crear_registro1897(int id) {
    Registro1897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
