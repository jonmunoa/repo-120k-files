// fichero 22333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22333;

Registro22333 crear_registro22333(int id) {
    Registro22333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
