// fichero 8753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8753;

Registro8753 crear_registro8753(int id) {
    Registro8753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
