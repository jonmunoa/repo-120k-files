// fichero 40993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40993;

Registro40993 crear_registro40993(int id) {
    Registro40993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
