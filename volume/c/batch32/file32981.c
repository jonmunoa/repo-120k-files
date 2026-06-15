// fichero 32981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32981;

Registro32981 crear_registro32981(int id) {
    Registro32981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
