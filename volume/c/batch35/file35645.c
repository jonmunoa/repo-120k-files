// fichero 35645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35645;

Registro35645 crear_registro35645(int id) {
    Registro35645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
