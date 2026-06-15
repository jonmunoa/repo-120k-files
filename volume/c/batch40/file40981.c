// fichero 40981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40981;

Registro40981 crear_registro40981(int id) {
    Registro40981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
