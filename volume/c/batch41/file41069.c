// fichero 41069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41069;

Registro41069 crear_registro41069(int id) {
    Registro41069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
