// fichero 5981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5981;

Registro5981 crear_registro5981(int id) {
    Registro5981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
