// fichero 7841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7841;

Registro7841 crear_registro7841(int id) {
    Registro7841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
