// fichero 32881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32881;

Registro32881 crear_registro32881(int id) {
    Registro32881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
