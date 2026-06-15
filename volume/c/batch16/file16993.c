// fichero 16993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16993;

Registro16993 crear_registro16993(int id) {
    Registro16993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
