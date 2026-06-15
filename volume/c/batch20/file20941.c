// fichero 20941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20941;

Registro20941 crear_registro20941(int id) {
    Registro20941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
