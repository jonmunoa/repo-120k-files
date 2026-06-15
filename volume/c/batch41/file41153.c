// fichero 41153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41153;

Registro41153 crear_registro41153(int id) {
    Registro41153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
