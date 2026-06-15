// fichero 41769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41769;

Registro41769 crear_registro41769(int id) {
    Registro41769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
