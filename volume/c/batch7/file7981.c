// fichero 7981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7981;

Registro7981 crear_registro7981(int id) {
    Registro7981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
