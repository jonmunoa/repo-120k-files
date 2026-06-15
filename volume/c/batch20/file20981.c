// fichero 20981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20981;

Registro20981 crear_registro20981(int id) {
    Registro20981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
