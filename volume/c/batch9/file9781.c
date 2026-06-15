// fichero 9781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9781;

Registro9781 crear_registro9781(int id) {
    Registro9781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
