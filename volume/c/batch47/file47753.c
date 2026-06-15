// fichero 47753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47753;

Registro47753 crear_registro47753(int id) {
    Registro47753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
