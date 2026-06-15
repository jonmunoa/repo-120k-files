// fichero 20753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20753;

Registro20753 crear_registro20753(int id) {
    Registro20753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
