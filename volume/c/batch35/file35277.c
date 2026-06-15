// fichero 35277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35277;

Registro35277 crear_registro35277(int id) {
    Registro35277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
