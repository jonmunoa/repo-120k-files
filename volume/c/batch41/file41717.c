// fichero 41717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41717;

Registro41717 crear_registro41717(int id) {
    Registro41717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
