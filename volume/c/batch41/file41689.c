// fichero 41689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41689;

Registro41689 crear_registro41689(int id) {
    Registro41689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
