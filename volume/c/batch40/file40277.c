// fichero 40277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40277;

Registro40277 crear_registro40277(int id) {
    Registro40277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
