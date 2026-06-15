// fichero 31985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31985;

Registro31985 crear_registro31985(int id) {
    Registro31985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
