// fichero 41781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41781;

Registro41781 crear_registro41781(int id) {
    Registro41781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
