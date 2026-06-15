// fichero 16981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16981;

Registro16981 crear_registro16981(int id) {
    Registro16981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
