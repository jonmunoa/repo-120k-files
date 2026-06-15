// fichero 49981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49981;

Registro49981 crear_registro49981(int id) {
    Registro49981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
