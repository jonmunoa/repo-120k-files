// fichero 1753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1753;

Registro1753 crear_registro1753(int id) {
    Registro1753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
