// fichero 41085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41085;

Registro41085 crear_registro41085(int id) {
    Registro41085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
