// fichero 47645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47645;

Registro47645 crear_registro47645(int id) {
    Registro47645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
