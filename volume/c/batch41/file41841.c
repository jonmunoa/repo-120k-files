// fichero 41841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41841;

Registro41841 crear_registro41841(int id) {
    Registro41841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
