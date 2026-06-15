// fichero 40885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40885;

Registro40885 crear_registro40885(int id) {
    Registro40885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
