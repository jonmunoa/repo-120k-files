// fichero 1777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1777;

Registro1777 crear_registro1777(int id) {
    Registro1777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
