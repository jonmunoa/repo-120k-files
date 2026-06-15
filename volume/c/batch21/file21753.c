// fichero 21753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21753;

Registro21753 crear_registro21753(int id) {
    Registro21753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
