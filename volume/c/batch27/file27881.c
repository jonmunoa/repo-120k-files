// fichero 27881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27881;

Registro27881 crear_registro27881(int id) {
    Registro27881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
