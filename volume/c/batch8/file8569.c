// fichero 8569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8569;

Registro8569 crear_registro8569(int id) {
    Registro8569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
