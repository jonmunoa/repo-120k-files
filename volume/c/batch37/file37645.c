// fichero 37645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37645;

Registro37645 crear_registro37645(int id) {
    Registro37645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
