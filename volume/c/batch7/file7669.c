// fichero 7669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7669;

Registro7669 crear_registro7669(int id) {
    Registro7669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
