// fichero 1705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1705;

Registro1705 crear_registro1705(int id) {
    Registro1705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
