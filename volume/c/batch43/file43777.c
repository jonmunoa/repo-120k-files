// fichero 43777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43777;

Registro43777 crear_registro43777(int id) {
    Registro43777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
