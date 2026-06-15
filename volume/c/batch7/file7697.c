// fichero 7697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7697;

Registro7697 crear_registro7697(int id) {
    Registro7697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
