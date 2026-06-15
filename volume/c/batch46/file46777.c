// fichero 46777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46777;

Registro46777 crear_registro46777(int id) {
    Registro46777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
