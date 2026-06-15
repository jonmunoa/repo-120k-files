// fichero 7753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7753;

Registro7753 crear_registro7753(int id) {
    Registro7753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
