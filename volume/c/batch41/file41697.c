// fichero 41697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41697;

Registro41697 crear_registro41697(int id) {
    Registro41697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
