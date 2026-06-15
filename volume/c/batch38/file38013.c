// fichero 38013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38013;

Registro38013 crear_registro38013(int id) {
    Registro38013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
